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
import java.awt.Stroke;

public class BorderDecorator extends Decorator{
	
  
    Color Black = Color.BLACK;
	
    public BorderDecorator(Component cmp) {
    	super(cmp);
    }
    
	public BorderDecorator(Component component, int i, int j, int k, int l) {
		// TODO Auto-generated constructor stub
		super(component, i, j, k, l);
        
   
	}
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
