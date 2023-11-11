import java.awt.Graphics;
import java.awt.AlphaComposite;
import java.awt.BasicStroke;
import java.awt.Color;
import java.awt.Graphics2D;

public class ColouredGlassDecorator extends Decorator {
	
	Color yellow = Color.YELLOW;

	
    
    public ColouredGlassDecorator(Component cmp) {
    	super(cmp);
    }
    
	public ColouredGlassDecorator(Component component, int i, int j, int k, int l) {
		super(component, i, j, k, l);
		
		
		// TODO Auto-generated constructor stub
	}




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
