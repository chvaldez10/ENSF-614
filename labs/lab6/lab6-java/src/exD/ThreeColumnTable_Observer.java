package exD;

import java.util.ArrayList;

/**
 * ThreeColumnTable_Observer is an implementation of the Observer interface,
 * designed to observe changes in a DoubleArrayListSubject. This observer
 * formats and displays the data in a table with exactly three columns.
 */
public class ThreeColumnTable_Observer implements Observer {
    DoubleArrayListSubject doubleArrayList;
    ArrayList<Double> data;

    /**
     * Constructs a new ThreeColumnTable_Observer and registers it with the
     * specified DoubleArrayListSubject. The observer will be updated with
     * the subject's current state.
     *
     * @param d The DoubleArrayListSubject to observe.
     */
    public ThreeColumnTable_Observer(DoubleArrayListSubject d) {
        doubleArrayList = d;
        doubleArrayList.registerObserver(this);
    }

    /**
     * Updates the observer with new data and displays it.
     * This method is called by the observed DoubleArrayListSubject when its state changes.
     *
     * @param d The updated data from the DoubleArrayListSubject.
     */
    @Override
    public void update(ArrayList<Double> d) {
        this.data = d;
        display();
    }

    /**
     * Displays the current data in a formatted table with three columns.
     * Data is printed row-wise, and a new line is started after every third value.
     */
    public void display() {
        for (int i = 0; i < data.size(); i++) {
            System.out.print(data.get(i) + " ");
            if ((i + 1) % 3 == 0) {
                System.out.println();
            }
        }
        System.out.println("\n");
    }
}
