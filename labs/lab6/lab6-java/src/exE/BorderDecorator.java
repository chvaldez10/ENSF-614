package exE;
import java.awt.*;

/**
 * BorderDecorator is a concrete decorator that adds a dashed border around a component.
 * It draws a dashed rectangle around the perimeter of the component.
 */
public class BorderDecorator extends Decorator {

    /**
     * Constructs a BorderDecorator with specified dimensions.
     *
     * @param cmp    the Component to be decorated
     * @param x      the X-coordinate position of the border
     * @param y      the Y-coordinate position of the border
     * @param width  the width of the border area
     * @param height the height of the border area
     */
    public BorderDecorator(Component cmp, int x, int y, int width, int height) {
        super(cmp);
        this.x = x;
        this.y = y;
        this.width = width;
        this.height = height;
    }

    /**
     * Draws the decorated component with a dashed border.
     *
     * @param g the Graphics context for drawing
     */
    @Override
    public void draw(Graphics g) {
        cmp.draw(g);

        Graphics2D g2d = (Graphics2D) g.create();
        try {
            float[] dashPattern = { 10.0f };
            BasicStroke dashedStroke = new BasicStroke(
                    1.0f, BasicStroke.CAP_BUTT, BasicStroke.JOIN_MITER, 10.0f, dashPattern, 0.0f
            );
            g2d.setStroke(dashedStroke);
            g2d.drawRect(x, y, width, height);
        } finally {
            g2d.dispose();
        }
    }
}
