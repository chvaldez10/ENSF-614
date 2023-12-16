/**
 * ColouredGlassDecorator.java
 * ENSF 614 Fall 2023 LAB 6 - EXERCISE E and F
 * @authors Braden Tink and Christian Valdez
 * Submitted On: Nov 11, 2023
 */
import java.awt.Graphics;
import java.awt.AlphaComposite;
import java.awt.BasicStroke;
import java.awt.Color;
import java.awt.Graphics2D;

/**
 * ColouredGlassDecorator class extend the decorator class
 * Class adds another dimension to the graphic
 * @authors Braden Tink and Christian Valdez
 * class has one class variable which is the color yellow being used 
 * for the border color
 */
public class ColouredGlassDecorator extends Decorator {
	
	Color yellow = Color.YELLOW;

	 /**
     * Constructor for the class passing in one argument being the 
     * component which is passed to the super constructor
     * @param cmp
     */
    public ColouredGlassDecorator(Component cmp) {
    	super(cmp);
    }
    
    /**
	 *Constructor for the class passing in five value all being passed back to the 
     * super constructor 
	  * @param component
	  * @param i
	  * @param j
	  * @param k
	  * @param l
	  */
	public ColouredGlassDecorator(Component component, int i, int j, int k, int l) {
		super(component, i, j, k, l);
		
		
		// TODO Auto-generated constructor stub
	}



	/**
	 * Draws function is an override function from the decorator class which adds
	 * another dimension to the graphics that is being passed in 
	 */
	@Override
	public void draw(Graphics g) {
		// TODO Auto-generated method stub
		super.draw(g);
		Graphics2D g2d = (Graphics2D) g;
		g2d.setColor(Color.yellow);
		g2d.setComposite(AlphaComposite.getInstance(AlphaComposite.SRC_OVER, 1 * 0.1f));
		g2d.fillRect(getX(), getY(), getWidth(), getHeight());
		g2d.drawRect(getX(), getY(), getWidth(), getHeight());
	}

}
