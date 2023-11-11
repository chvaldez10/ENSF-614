import java.util.ArrayList;

public class ThreeColumnTable_Observer implements Observer {
	Subject table;
	
	
	public ThreeColumnTable_Observer(Subject tbl) {
		// TODO Auto-generated constructor stub
		this.table = tbl;
		table.register(this);
	}

	
	
	@Override
	public void update(ArrayList<Double> data) {
		// TODO Auto-generated method stub
		this.display(data);
	}
	
	

	public void display(ArrayList<Double> data) {
		System.out.println("\nNotification to Three-Column Table Observer: Data Changed:");
		int size = data.size();
		
		for(int i = 0; i < size;i++){
			
			
			if((i % 3) == 0 && i != 0) {
				System.out.print("\n");
			}
			System.out.print(data.get(i) + " ");
		}
		System.out.println();
		
	}

	
}