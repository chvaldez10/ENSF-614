package exD;

/**
 * The Subject interface is a key component in the Observer design pattern.
 * It defines methods for attaching and detaching observers to a subject.
 * Additionally, it includes a method for notifying all attached observers
 * of any state changes.
 *
 * @see Observer for the counterpart of Subject in the Observer pattern.
 */
public interface Subject {

    /**
     * Registers an observer to the subject. Once added, this observer will be
     * notified of any state changes in the subject.
     *
     * @param o The observer to be registered. Cannot be null.
     */
    void registerObserver(Observer o);

    /**
     * Removes an observer from the subject. After removal, this observer will
     * no longer receive state change notifications from this subject.
     *
     * @param o The observer to be removed. Cannot be null.
     */
    void removeObserver(Observer o);

    /**
     * Notifies all registered observers of a state change in the subject.
     * This method is typically called after the subject undergoes a change
     * in its state.
     */
    void notifyObservers();
}
