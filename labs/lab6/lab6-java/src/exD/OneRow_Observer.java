package exD;

import java.util.ArrayList;

/**
 * OneRow_Observer is an implementation of the Observer interface for the
 * Observer pattern. It observes changes in a DoubleArrayListSubject and displays
 * the updated data in a single row format.
 */
public class OneRow_Observer implements Observer{
    DoubleArrayListSubject doubleArrayList;
    ArrayList<Double> data;

    /**
     * Constructs a new OneRow_Observer and registers it with the specified
     * DoubleArrayListSubject. The observer will receive and display updates
     * from the subject.
     *
     * @param d The DoubleArrayListSubject to be observed.
     */
    public OneRow_Observer(DoubleArrayListSubject d) {
        doubleArrayList = d;
        doubleArrayList.registerObserver(this);
    }

    /**
     * Updates the observer with the new data from the DoubleArrayListSubject
     * and calls the display method to show the data.
     *
     * @param d The updated data from the DoubleArrayListSubject.
     */
    @Override
    public void update(ArrayList<Double> d) {
        this.data = d;
        display();
    }

    /**
     * Displays the current data in a single row format. Each element in the data
     * list is printed out on the same line, separated by spaces.
     */
    public void display() {
        for (double d : data) {
            System.out.print(d + " ");
        }
        System.out.println("\n");
    }
}
