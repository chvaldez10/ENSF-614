package exE;

/**
 * Abstract decorator class that implements the Component interface.
 * It serves as a base for concrete decorators in the decorator pattern.
 */
public abstract class Decorator implements Component {

    protected Component cmp; // The component being decorated
    protected int x;         // X-coordinate position of the component
    protected int y;         // Y-coordinate position of the component
    protected int width;     // Width of the component
    protected int height;    // Height of the component

    /**
     * Constructs a Decorator wrapping around a given Component.
     *
     * @param cmp the Component to be decorated
     */
    public Decorator(Component cmp) {
        this.cmp = cmp;
    }
}
