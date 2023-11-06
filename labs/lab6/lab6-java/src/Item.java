public class Item<E extends Number & Comparable<E>> {
	private E item;

	public Item(E value) {
		item = value;
	}

	public void setItem(E value) {
		item = value;
	}

	public E getItem() {
		return item;
	}
}