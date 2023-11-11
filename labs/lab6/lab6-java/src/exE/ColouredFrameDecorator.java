package exE;
import java.awt.*;

public class ColouredFrameDecorator extends Decorator{
    private int thickness;

    public ColouredFrameDecorator(Component cmp, int x, int y, int width, int height, int thickness){
        super(cmp);
        this.x = x;
        this.y = y;
        this.width = width;
        this.height = height;
        this.thickness = thickness;
    }
    @Override
    public void draw(Graphics g) {
        cmp.draw(g); // Draw the original component

        // Draw the color frame
        Graphics2D g2d = (Graphics2D) g.create();
        g2d.setColor(Color.RED);

        // Draw the frame as filled rectangles around the component
        g2d.fillRect(x, y - thickness, width, thickness); // Top
        g2d.fillRect(x - thickness, y, thickness, height); // Left
        g2d.fillRect(x + width, y, thickness, height); // Right
        g2d.fillRect(x, y + height, width, thickness); // Bottom

        g2d.dispose();
    }
}
