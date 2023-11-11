/**
 
Filename.java
ENSF 614 Fall 2023 LAB 6 - EXERCISE E and F
@authors Braden Tink and Christian Valdez
Submitted On: Nov 11, 2023
*/
import java.awt.Graphics;
import java.awt.BasicStroke;
import java.awt.Color;
import java.awt.Graphics2D;

public class ColouredFrameDecorator extends Decorator{
	public int thickness;
	Color red = Color.RED;
	
	public ColouredFrameDecorator(Component cmp) {
	    	super(cmp);
	}
	  
	public ColouredFrameDecorator(Component component, int i, int j, int k, int l, int m) {
		super(component, i, j, k, l);
		thickness = m;
	}
	
	
	
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
