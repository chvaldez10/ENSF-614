import java.util.ArrayList;

public class OneRow_Observer implements Observer {

	Subject table;
	
	
	public OneRow_Observer(Subject tbl) {
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
		System.out.println("\nNotification to One-Column Table Observer: Data Changed:");
		
		int size = data.size();
		
		for(int i = 0; i < size;i++){
			
			System.out.print(data.get(i) + " ");
		}
	
		System.out.println();
	}
}

