import java.awt.Font;
import java.awt.Graphics;

public class Text implements Component {
	private Component component;
	private int x; 
	private int y;
	private String text;
	
	public Text(String string, int i, int j) {
		// TODO Auto-generated constructor stub
		
		x = i;
		y = j;
		text = string;
	}
	
	public void setFont() {
		
	}
	
	@Override
	public void draw(Graphics g) {
		// TODO Auto-generated method stub
		
		g.drawString(text, x, y);
	}

}
