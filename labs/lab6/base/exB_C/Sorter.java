/**
 * Sorter.java
 * ENSF 614 Fall 2023 LAB 6 - EXERCISE B and C
 * @authors Braden Tink and Christian Valdez
 * Submitted On: Nov 11, 2023
 */
import java.util.ArrayList;

/**
 * Defines the sorting behavior for objects of type {@link Item}.
 * This interface is part of the strategy pattern and allows for different sorting
 * implementations for a collection of {@link Item} objects.
 *
 * @param <E> the type of the elements in the items, extending both Number and Comparable
 */
public interface Sorter<E extends Number & Comparable<E>> {

    /**
     * Sorts the provided ArrayList of {@link Item} objects.
     *
     * @param arr the ArrayList of {@link Item} objects to be sorted
     */
    void sort(ArrayList<Item<E>> arr);
}
