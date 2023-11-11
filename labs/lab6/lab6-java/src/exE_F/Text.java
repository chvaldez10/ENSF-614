package exE_F;

import java.awt.*;

/**
 * Text class implements the Component interface to display text.
 * It represents a text element that can be drawn on the screen.
 */
public class Text implements Component {
    private String text;  // The text to be displayed
    private int x;        // The X-coordinate position of the text
    private int y;        // The Y-coordinate position of the text

    /**
     * Constructs a Text object with specified content and position.
     *
     * @param text the string of text to be displayed
     * @param x    the X-coordinate position of the text
     * @param y    the Y-coordinate position of the text
     */
    public Text(String text, int x, int y) {
        this.text = text;
        this.x = x;
        this.y = y;
    }

    /**
     * Draws the text at its specified position.
     *
     * @param g the Graphics context for drawing
     */
    @Override
    public void draw(Graphics g) {
        g.drawString(text, x, y);
    }
}
