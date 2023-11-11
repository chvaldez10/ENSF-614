package exE;
import java.awt.*;

/**
 * ColouredFrameDecorator is a concrete decorator that adds a colored frame around a component.
 * It overlays a red frame with a specified thickness around the component.
 */
public class ColouredFrameDecorator extends Decorator {
    private int thickness;

    /**
     * Constructs a ColouredFrameDecorator with specified dimensions and frame thickness.
     *
     * @param cmp       the Component to be decorated
     * @param x         the X-coordinate position of the component
     * @param y         the Y-coordinate position of the component
     * @param width     the width of the component
     * @param height    the height of the component
     * @param thickness the thickness of the frame
     */
    public ColouredFrameDecorator(Component cmp, int x, int y, int width, int height, int thickness) {
        super(cmp);
        this.x = x;
        this.y = y;
        this.width = width;
        this.height = height;
        this.thickness = thickness;
    }

    /**
     * Draws the decorated component with a red frame.
     *
     * @param g the Graphics context for drawing
     */
    @Override
    public void draw(Graphics g) {
        cmp.draw(g);

        Graphics2D g2d = (Graphics2D) g.create();
        try {
            g2d.setColor(Color.RED);
            g2d.fillRect(x, y - thickness, width, thickness); // Top
            g2d.fillRect(x - thickness, y, thickness, height); // Left
            g2d.fillRect(x + width, y, thickness, height); // Right
            g2d.fillRect(x, y + height, width, thickness); // Bottom
        } finally {
            g2d.dispose();
        }
    }
}
