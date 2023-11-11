/**
 * Item.java
 * ENSF 614 Fall 2023 LAB 6 - EXERCISE B and C
 * @authors Braden Tink and Christian Valdez
 * Submitted On: Nov 11, 2023
 */

/**
 * Represents a generic item that holds a value of a type that extends both Number and Comparable.
 * This class provides methods to set and get the value of the item.
 *
 * @param <E> the type of the value, which extends both Number and Comparable
 */
public class Item<E extends Number & Comparable<E>> {
	private E value; // Renamed 'item' to 'value' for better readability

	/**
	 * Constructs an Item with the specified value.
	 *
	 * @param value the value to be stored in this item
	 */
	public Item(E value) {
		this.value = value;
	}

	/**
	 * Sets the value of this item.
	 *
	 * @param value the new value to be stored in this item
	 */
	public void setItem(E value) {
		this.value = value;
	}

	/**
	 * Returns the current value stored in this item.
	 *
	 * @return the current value
	 */
	public E getItem() {
		return value;
	}
}
