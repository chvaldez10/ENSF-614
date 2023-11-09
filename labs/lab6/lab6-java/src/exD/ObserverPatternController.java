package exD;

public class ObserverPatternController {
 	public static void main(String []s) {
		double [] arr = {10, 20, 33, 44, 50, 30, 60, 70, 80, 10, 11, 23, 34, 55};
		System.out.println("Creating object mydata with an empty list -- no data:");
		DoubleArrayListSubject mydata = new DoubleArrayListSubject();
		System.out.println("Expected to print: Empty List ...");
		mydata.display();
 		mydata.populate(arr);
		System.out.println("mydata object is populated with: 10, 20, 33, 44, 50, 30, 60, 70, 80, 10, 11, 23, 34, 55 ");
		System.out.print("Now, creating three observer objects: ht, vt, and hl ");
		System.out.println("\nWhich are immediately notified of existing data with different views.");

		System.out.println("\nNotification to Three-Column Table Observer: Data Changed:");
		ThreeColumnTable_Observer ht = new ThreeColumnTable_Observer(mydata);

		System.out.println("\nNotification to Five-Rows Table Observer: Data Changed:");
		FiveRowsTable_Observer vt = new FiveRowsTable_Observer(mydata);

		System.out.println("Notification to One-Row Table Observer: Data Changed:");
		OneRow_Observer hl = new OneRow_Observer(mydata);

		System.out.println("Changing the third value from 33, to 66 -- (All views must show this change):");
		mydata.setData(66.0, 2);

		System.out.println("Adding a new value to the end of the list -- (All views must show this change)");
		mydata.addData(1000.0);

		System.out.println("Now removing two observers from the list:");
		mydata.remove(ht);
		mydata.remove(vt);
		System.out.println("Only the remained observer (One Row ), is notified.");
		mydata.addData(2000.0);

		System.out.println("Now removing the last observer from the list:");
		mydata.remove(hl);
		System.out.println("Adding a new value the end of the list:");
		mydata.addData(3000.0);
		System.out.println("Since there is no observer -- nothing is displayed ...");
		System.out.println("Now, creating a new Three-Column observer that will be notified of existing data:");
		ht = new ThreeColumnTable_Observer(mydata);
	}
}
