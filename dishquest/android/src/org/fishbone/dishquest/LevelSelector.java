/**
 * Retrieves the parameters that define an entire level from the database, sends parameters to native code
 * 
 */
package org.fishbone.dishquest;

import java.util.ArrayList;

public class LevelSelector
{
	private Level m_level;
	
	private class Level
	{	
		public Level(int time, ArrayList<Dish> dishes, ArrayList<Cleaner> cleaners)
		{
			this.time = time;
			this.dishes = dishes;
			this.cleaners = cleaners;
		}
		
		int time;
		ArrayList<Dish> dishes;
		ArrayList<Cleaner> cleaners;
	}
	
	private class Dish
	{
		String type;
		ArrayList<Dirt> dirts;
	}
	
	private class Dirt
	{
		int health;
		String type;
		float x, y;
	}
	
	private class Cleaner
	{
		int m_quantity;
		String type;
	}
}
