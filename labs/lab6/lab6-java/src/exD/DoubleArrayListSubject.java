package exD;

import java.util.ArrayList;

/**
 * DoubleArrayListSubject is a concrete implementation of the Subject part
 * of the Observer pattern. It maintains a list of observers and notifies them
 * of changes to its internal state, which is represented by a list of Double values.
 */
public class DoubleArrayListSubject {
    private ArrayList<Observer> observers; // List of observers
    private ArrayList<Double> data; // Internal state represented as a list of Double values

    /**
     * Constructs a new DoubleArrayListSubject with empty lists of observers and data.
     */
    public DoubleArrayListSubject() {
        observers = new ArrayList<>();
        data = new ArrayList<>();
    }

    /**
     * Registers an observer and updates it with the current state.
     * The observer is added to the list of observers and immediately updated with
     * the current state of data.
     *
     * @param o The Observer to be added to the list. Cannot be null.
     */
    public void registerObserver(Observer o) {
        observers.add(o);
        o.update(data);
    }


    /**
     * Removes an observer from the list of observers.
     * The observer will no longer be notified of state changes.
     *
     * @param o The Observer to be removed. Cannot be null.
     */
    public void removeObserver(Observer o) {
        observers.remove(o);
    }

    /**
     * Adds a new double value to the data list and notifies observers of the change.
     *
     * @param d The double value to be added.
     */
    public void addData(double d) {
        data.add(d);
        notifyObserver();
    }

    /**
     * Sets a value at a specified index in the data list and notifies observers.
     *
     * @param value The double value to set.
     * @param i     The index at which the value should be set.
     */
    public void setData(double value, int i) {
        data.set(i, value);
        notifyObserver();
    }


    /**
     * Populates the data list with an array of double values and notifies observers.
     *
     * @param arr The array of double values to add to the data list.
     */
    public void populate(double[] arr) {
        data.clear(); // Clears the existing data
        for(double d : arr) {
            addData(d); // Add each value and notify observers
        }
    }

    /**
     * Notifies all registered observers of a change in the subject's state.
     */
    public void notifyObserver(){
        for(Observer o : observers) {
            o.update(data);
        }
    }

    /**
     * Displays a simple message, primarily for testing or debugging purposes.
     */
    public void display() {
        System.out.println("Empty list ...");
    }
}
