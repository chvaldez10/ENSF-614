import java.awt.Graphics;

class Decorator implements Component {
	protected int x;
    protected int y;
    protected int width;
    protected int height;
	protected Component cmp;
	

    public Decorator(Component component, int i, int j, int k, int l) {
		x = i;
		y = j;
		width = k;
		height = l;
    	cmp = component; 
    }
    
    public Decorator(Component component) {
		// TODO Auto-generated constructor stub
    	cmp = component;
	}

	int getX(){
    	return x;
    }
    int getY(){
    	return y;
    }
    int getWidth(){
    	return width;
    }
    int getHeight(){
    	return height;
    }

    @Override
	public void draw(Graphics g) {
		// TODO Auto-generated method stub
		  cmp.draw(g);
		
	}

  
}
