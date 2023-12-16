/**
 * Decorator.java
 * ENSF 614 Fall 2023 LAB 6 - EXERCISE E and F
 * @authors Braden Tink and Christian Valdez
 * Submitted On: Nov 11, 2023
 */
import java.awt.Graphics;

/**
 * Decorator class implements 
 * @authors Braden Tink and Christian Valdez
 * Class has five class variables being the components of the graphics 
 */
class Decorator implements Component {
	protected int x;
    protected int y;
    protected int width;
    protected int height;
	protected Component cmp;
	
	/**
	 * Decorator constructor takes in five arguments 
	 * Sets all five class variables with the arguments 
	 * @param component
	 * @param i
	 * @param j
	 * @param k
	 * @param l
	 */
    public Decorator(Component component, int i, int j, int k, int l) {
		x = i;
		y = j;
		width = k;
		height = l;
    	cmp = component; 
    }
    
    /**
     * Decorator constructor taking in one argument and 
     * setting the component of the class
     * @param component
     */
    public Decorator(Component component) {
		// TODO Auto-generated constructor stub
    	cmp = component;
	}
    /**
     * getX returns the X value
     * @return
     */
	int getX(){
    	return x;
    }
	/**
     * getX returns the Y value
     * @return
     */
    int getY(){
    	return y;
    }
    /**
     * getX returns the Width value
     * @return
     */
    int getWidth(){
    	return width;
    }
    /**
     * getX returns the Height value
     * @return
     */
    int getHeight(){
    	return height;
    }
    /**
     * Draw function takes in one argument the graphics then
     * calls draw on passing in that graphic 
     */
    @Override
	public void draw(Graphics g) {
		// TODO Auto-generated method stub
		  cmp.draw(g);
		
	}

  
}
