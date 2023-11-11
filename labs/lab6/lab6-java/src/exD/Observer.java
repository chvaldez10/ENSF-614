package exD;
import java.util.ArrayList;

/**
 * The Observer interface is part of the Observer design pattern.
 * Implementations of this interface are intended to be used as observers
 * in a publish-subscribe scenario. Observers monitor changes in a subject's state.
 *
 * @see Subject for the counterpart of Observer in the Observer pattern.
 */
public interface Observer {

    /**
     * This method is called when the Subject to which this Observer is attached
     * changes its state. Implementations of this method should define how the Observer
     * reacts to state changes.
     *
     * @param data The updated data from the Subject. This data represents the
     *             current state to which this Observer should synchronize.
     */
    void update(ArrayList<Double> data);
}
