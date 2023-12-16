/**
 * Text.java
 * ENSF 614 Fall 2023 LAB 6 - EXERCISE E and F
 * @authors Braden Tink and Christian Valdez
 * Submitted On: Nov 11, 2023
 */
import java.awt.Font;
import java.awt.Graphics;

/**
 * Text Class which implements the component class
 * @authors Braden Tink and Christian Valdez
 * Class has four class variables 
 *
 */
public class Text implements Component {
	private Component component;
	
	private int x; 
	private int y;
	private String text;
	/**
	 * Text constructor passing in three values setting the 
	 * class variables 
	 * @param string
	 * @param i
	 * @param j
	 */
	public Text(String string, int i, int j) {
		// TODO Auto-generated constructor stub
		
		x = i;
		y = j;
		text = string;
	}
	
	/**
	 * Draw function is an override function from the component class
	 * 
	 * One argument is being passed being the graphic 
	 * 
	 * Another dimension is added to the graphic 
	 */
	@Override
	public void draw(Graphics g) {
		// TODO Auto-generated method stub
		
		g.drawString(text, x, y);
	}

}
