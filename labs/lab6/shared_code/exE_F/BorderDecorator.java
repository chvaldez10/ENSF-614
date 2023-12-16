/**
 * BorderDecorator.java
 * ENSF 614 Fall 2023 LAB 6 - EXERCISE E and F
 * @authors Braden Tink and Christian Valdez
 * Submitted On: Nov 11, 2023
 */
import java.awt.Graphics;
import java.awt.BasicStroke;
import java.awt.Color;
import java.awt.Graphics2D;
import java.awt.Stroke;

/**
 * BorderDecorator class extend the decorator class
 * Class adds another dimension to the graphic 
 * @authors Braden Tink and Christian Valdez
 * Class has one class variable which is the color black being used 
 * for the border color
 *
 */
public class BorderDecorator extends Decorator{
	
    Color Black = Color.BLACK;
	
    /**
     * Constructor for the class passing in one argument being the 
     * component which is passed to the super constructor
     * @param cmp
     */
    public BorderDecorator(Component cmp) {
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
     */
	public BorderDecorator(Component component, int i, int j, int k, int l) {
		// TODO Auto-generated constructor stub
		super(component, i, j, k, l);
        
   
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
		Stroke dashed = new BasicStroke(3, BasicStroke.CAP_BUTT, BasicStroke.JOIN_BEVEL, 0, new float[]{9},0);
		Graphics2D g2d = (Graphics2D) g;
		
		g2d.setStroke(dashed);
		g2d.setColor(Black);
		g2d.drawRect(getX(), getY(), getWidth(), getHeight());
		

		
    }

}
