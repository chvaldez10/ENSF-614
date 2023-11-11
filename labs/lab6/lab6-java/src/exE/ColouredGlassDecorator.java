package exE;
import java.awt.*;

/**
 * ColouredGlassDecorator is a concrete decorator that adds a colored glass effect.
 * It overlays a translucent green rectangle on top of the component.
 */
public class ColouredGlassDecorator extends Decorator {

    /**
     * Constructs a ColouredGlassDecorator with specified dimensions.
     *
     * @param cmp    the Component to be decorated
     * @param x      the X-coordinate position of the glass overlay
     * @param y      the Y-coordinate position of the glass overlay
     * @param width  the width of the glass overlay
     * @param height the height of the glass overlay
     */
    public ColouredGlassDecorator(Component cmp, int x, int y, int width, int height) {
        super(cmp);
        this.x = x;
        this.y = y;
        this.width = width;
        this.height = height;
    }

    /**
     * Draws the decorated component with a green glass overlay.
     *
     * @param g the Graphics context for drawing
     */
    @Override
    public void draw(Graphics g) {
        Graphics2D g2d = (Graphics2D) g.create();
        try {
            g2d.setColor(Color.GREEN);
            g2d.fillRect(x, y, width, height);
            cmp.draw(g);
        } finally {
            g2d.dispose();
        }
    }
}
