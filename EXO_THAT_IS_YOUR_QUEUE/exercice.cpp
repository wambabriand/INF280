#include <iostream>       
#include <list>          



int main ()
{

	std::list<long> my_list;
	int P, C , i;
	char cmd[5];
	long current, count;
	bool full;


while(true){

	scanf("%d%d",&P, &C);

	if(P==0){
		break ;
	}

	my_list.clear();
	full = false; 
	count = 1;

	for( i=0 ; i<C ; i++){
		scanf("%s",cmd);

		if( cmd[0]=='E'){
			scanf("%ld",&current);
			scanf("%s",cmd);	
			my_list.remove(current);
			my_list.push_back(current);
			i++;
		}
		else{

			if(full){
				current = my_list.front();
				my_list.pop_front();
			}
			else {
				current = count ;
				count++;
				if(count>P){
					full = true;
				}
			}

			my_list.push_back(current);
		}

		printf("%ld\n",current);

	}

	printf("fin du tour\n\n\n");

}


  return 0;
}
