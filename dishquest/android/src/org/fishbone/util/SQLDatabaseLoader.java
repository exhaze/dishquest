/**
 *  Helper class to load an existing sqlite3 database from Android assets folder
 * 
 * @author david
 *
 */

package org.fishbone.util;
import android.content.Context;
import android.database.sqlite.SQLiteDatabase;

import java.io.*;

public class SQLDatabaseLoader
{	
    /**
	 * Load the sqlite3 db from 'assets' and write it to disk 
	 * @param db_name Name of the database file- must match the name in assets folder
	 * @return False if the database was already on disk
	 */
	public static boolean createDatabase(Context context, final String db_name)
	{
		final String DEFAULT_DB_DIR = "/data/data/" + context.getPackageName() + "/db/";
	   
	    File db_dir = new File(DEFAULT_DB_DIR);
		File db_file = new File(DEFAULT_DB_DIR + db_name);
		
		if (db_file.exists())
		{
			//return false;
			SQLDatabaseLoader.clearDatabase(context, db_name);
		}
		
//		else
		{
			if (!db_dir.exists())
			{
				db_dir.mkdir();
			}
			
			try
			{
				InputStream is = context.getAssets().open(db_name);
				OutputStream os = new FileOutputStream(db_file);
				
	            byte[] buff = new byte[1024];
	            int length;
	            while ((length = is.read(buff)) > 0) 
	            {
	                os.write(buff, 0, length);
	            }
	            
	            os.flush();
	            os.close();
	            is.close();
			}
			catch(IOException e)
			{
			} 
		}
		
		return true;
	}
	
	public static SQLiteDatabase getDatabase(Context context, final String name)
	{
		final String db_path = "/data/data/" + context.getPackageName() + "/db/" + name;
		return SQLiteDatabase.openDatabase(db_path, null, (SQLiteDatabase.OPEN_READONLY | SQLiteDatabase.NO_LOCALIZED_COLLATORS));
	}
	
	public static boolean clearDatabase(Context context, final String name)
	{
		final String db_path = "/data/data/" + context.getPackageName() + "/db/" + name;
		File db_file = new File(db_path);
		
		if(db_file.exists())
		{
			return db_file.delete();
		}
		
		return false;
	}
}
