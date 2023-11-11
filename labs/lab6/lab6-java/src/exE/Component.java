package exE;

import java.awt.Graphics;

/**
 * Represents a component in the decorator pattern.
 * This interface declares a method for drawing the component.
 */
public interface Component {

    /**
     * Draws the component.
     *
     * @param g the Graphics context in which to draw the component
     */
    void draw(Graphics g);
}
