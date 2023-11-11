package exE;
import java.awt.*;

public class ColouredGlassDecorator extends Decorator{
    public ColouredGlassDecorator(Component cmp, int x, int y, int width, int height) {
        super(cmp);
        this.x = x;
        this.y = y;
        this.width = width;
        this.height = height;
    }

    @Override
    public void draw(Graphics g) {
        // Set up the graphics context for drawing
        Graphics2D g2d = (Graphics2D) g.create();

        // Draw the green background
        g2d.setColor(Color.GREEN); // Solid green color
        g2d.fillRect(x, y, width, height); // Fill a rectangle with the green color

        // Draw the component on top of the green background
        cmp.draw(g);

        // Clean up the graphics context
        g2d.dispose();
    }
}
