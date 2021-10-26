import java.util.*;

interface Search{
	public static <T extends Comparable<T>> int binarySearch(List<T> list, T key,int low, int high)
	  {
		int mid;
		
		
		if (key==null) {
			System.out.println("No such book found");
			return -1;
		}
		if (low>high){
			System.out.println("No such book found");
			return -1;
		}
			mid = low+(high-low)/2;
			if( list.get(mid).compareTo(key) > 0 )
		          return binarySearch(list, key, mid+1, high);
		      else if(list.get(mid).compareTo(key) < 0 )
		          return binarySearch( list, key, low, mid-1 );
		      else
		          return mid;		
	  }  
	
	@SuppressWarnings("rawtypes")
	static ArrayList split (List<Library> list,int code)
	{
		if (code==0)
		{
			ArrayList<Integer> al1 = new ArrayList<Integer>(); 
			for (Library i: list) 
				al1.add(i.bookID);
			return al1;
		}
		if (code==1)
		{
			ArrayList<String> al2 = new ArrayList<String>();  
			for (Library i: list) 
				al2.add(i.bookName);
			return al2;
		}
		return null;
	}
}

class Library implements Search{
	
	String bookName;
	int bookID;
	String rackNo;
	
	Library(String name, int id,String num){
		bookName = name;
		bookID = id;
		rackNo = num;
	}
	public String toString() {
	   return "Name: "+bookName+" ID: "+bookID+" Rack No.: "+rackNo;
	}
}

class LibraryApplication{
	
@SuppressWarnings("unchecked")
public static void main(String args[]){  
 
	int index;
	ArrayList<Library> al = new ArrayList<Library>();
	al.add(new Library("Java",19532,"A2"));
	al.add(new Library("C++",17888,"F1"));
	al.add(new Library("IoT",242537,"B6"));
	al.add(new Library("DIP",347888,"E8"));
	
	
	Collections.sort(al,new Comparator<Library>(){
		public int compare(Library l1, Library l2) {
			if (l1.bookID==l2.bookID)
				return 0;
			else if(l1.bookID<l2.bookID)
				return 1;
			else 
				return -1;
			}
	 }
);
	
	ArrayList<Integer> I = new ArrayList<Integer>();
	I = Search.split(al,0);
	System.out.println(I);
	index = Search.binarySearch(I,19532,0,al.size()-1);
	
	if (index!=-1)
		System.out.println(al.get(index));
	
	Collections.sort(al,new Comparator<Library>(){
		public int compare(Library l1, Library l2) {
			return l2.bookName.compareTo(l1.bookName);
		}	
	});
	
	
	ArrayList<String> S = new ArrayList<String>();
	S = Search.split(al,1);
	index = Search.binarySearch(S,"C++",0,al.size()-1);
	if (index!=-1)
		System.out.println(al.get(index));	
	}
}
