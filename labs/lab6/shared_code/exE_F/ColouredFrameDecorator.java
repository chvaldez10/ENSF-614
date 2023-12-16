/**
 * ColouredFrameDecorator.java
 * ENSF 614 Fall 2023 LAB 6 - EXERCISE E and F
 * @authors Braden Tink and Christian Valdez
 * Submitted On: Nov 11, 2023
 */
import java.awt.Graphics;
import java.awt.BasicStroke;
import java.awt.Color;
import java.awt.Graphics2D;

/**
 * ColouredFrameDecorator class extend the decorator class
 * Class adds another dimension to the graphic 
 * @authors Braden Tink and Christian Valdez
 * Class has one class variable which is the color red being used 
 * for the border color
 *
 */
public class ColouredFrameDecorator extends Decorator{
	public int thickness;
	Color red = Color.RED;
	
	  /**
     * Constructor for the class passing in one argument being the 
     * component which is passed to the super constructor
     * @param cmp
     */
	public ColouredFrameDecorator(Component cmp) {
	    	super(cmp);
	}
	 /**
	  * Constructor for the class passing in five value all being passed back to the 
      * super constructor 
	  * @param component
	  * @param i
	  * @param j
	  * @param k
	  * @param l
	  * @param m
	  */
	public ColouredFrameDecorator(Component component, int i, int j, int k, int l, int m) {
		super(component, i, j, k, l);
		thickness = m;
	}
	
	/**
	 * Draws function is an override function from the decorator class which adds
	 * another dimension to the graphics that is being passed in 
	 */
	@Override
    public void draw(Graphics g) {
        // Add border drawing behavior before calling the decorated component's draw method
        // You can customize the behavior here
		super.draw(g);
		g.setColor(red);
		Graphics2D g2d = (Graphics2D) g;
		
		
		g2d.setStroke(new BasicStroke(thickness));	
		g2d.setColor(red);
		g2d.drawRect(getX(), getY(), getWidth(), getHeight());
		
		
    }

}
