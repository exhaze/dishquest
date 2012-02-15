/**
 * Helper class to load the level database from android assets
 */

package org.fishbone.dishquest;

import org.fishbone.util.SQLDatabaseLoader;

import android.content.Context;
import android.database.sqlite.SQLiteDatabase;

public class LevelDatabaseLoader extends SQLDatabaseLoader
{
	private static final String DB_NAME = "dq_level_catalog.sqlite";
	
	public static SQLiteDatabase getLevelDatabase(Context context)
	{	
		SQLDatabaseLoader.createDatabase(context, DB_NAME);
		return SQLDatabaseLoader.getDatabase(context, DB_NAME);
	}
}
