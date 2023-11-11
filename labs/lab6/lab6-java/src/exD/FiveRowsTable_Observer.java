package exD;

import java.util.ArrayList;

/**
 * FiveRowsTable_Observer is an implementation of the Observer interface,
 * specifically designed to observe changes in a DoubleArrayListSubject.
 * This observer formats and displays the data in a table with a maximum of
 * five rows.
 */
public class FiveRowsTable_Observer implements Observer {
    DoubleArrayListSubject doubleArrayList;
    ArrayList<Double> data;

    /**
     * Constructs a new FiveRowsTable_Observer and registers it with the specified
     * DoubleArrayListSubject. The observer will be updated with the subject's current state.
     *
     * @param d The DoubleArrayListSubject to observe.
     */
    public FiveRowsTable_Observer(DoubleArrayListSubject d) {
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
     * Displays the current data in a formatted table with a maximum of five rows.
     * If the data cannot fill the entire table, remaining cells are left empty.
     */
    public void display() {
        int numColumns = (int) Math.ceil(data.size() / 5.0);

        for (int row = 0; row < 5; row++) {
            for (int col = 0; col < numColumns; col++) {
                int index = col * 5 + row;
                if (index < data.size()) {
                    System.out.print(data.get(index) + " ");
                }
            }
            System.out.println();
        }
        System.out.println();
    }
}
