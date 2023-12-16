/**
 * DemoDecoratorPattern.java
 * ENSF 614 Fall 2023 LAB 6 - EXERCISE E and F
 * @authors Braden Tink and Christian Valdez
 * Submitted On: Nov 11, 2023
 */
import java.awt.Font;
import java.awt.Graphics;
import javax.swing.JFrame;
import javax.swing.JPanel;

/*
 * The DemoDecoratorPattern class is the entry point of the program
 * And creates the JPanel that is displayed by the program
 * The class also declares all the variables that will be placed into the 
 * constructors. 
 */
public class DemoDecoratorPattern extends JPanel {
	Component t;
	
	/**
	 * Class declares a new text object passing in default values
	 */
    public DemoDecoratorPattern(){
   	 t = new Text ("Hello World", 60, 80); 
   }
	
    /**
     * painComponent Class call the constructors of the the decorator objects.
     * Class takes in one argument being the graphics object g
     * 
     * Two painComponet classes are defined for part E and F 
     */
    
    public void paintComponent(Graphics g){
 	    int fontSize = 10;
 	    g.setFont(new Font("TimesRoman", Font.PLAIN, fontSize));
 	    
 	    // Now lets decorate t with BorderDecorator: x = 30, y = 30, width = 100, and height 100
 	    t = new BorderDecorator(t, 30, 30, 100, 100);
 	   
 	    // Now lets add a ColouredFrameDecorator with x = 25, y = 25, width = 110, height = 110,
 		// and thickness = 10.
 	    t = new ColouredFrameDecorator(t, 25, 25, 110, 110, 10);
 
 	    // Now lets draw the product on the screen 	 
 	    t.draw(g);
    }
   
//    public void paintComponent(Graphics g){
//    	int fontSize = 10;
//    	g.setFont(new Font("TimesRoman", Font.PLAIN, fontSize));
//    	// GlassFrameDecorator info: x = 25, y = 25, width = 110, and height = 110
//    	t = new ColouredGlassDecorator(new ColouredFrameDecorator(
//    	new BorderDecorator(t, 30, 30, 100, 100), 25, 25, 110, 110, 10), 25, 25, 110, 110);
//    	t.draw(g);
//    }

	/**
	 * Main function entry point of the program
	 * @param args
	 */
	public static void main(String[] args) {	
        DemoDecoratorPattern panel = new DemoDecoratorPattern();
        JFrame frame = new JFrame("Learning Decorator Pattern");
        frame.getContentPane().add(panel);
        frame.setSize(400,400);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLocationRelativeTo(null);
        frame.setVisible(true);
	}
}
