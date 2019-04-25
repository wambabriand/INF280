#include <iostream>       
#include <list>          


std::list<long> create_list(long P , long C);

int main ()
{

	std::list<long> my_list;
	int   cas=1 ;
	char cmd[5];
	long i, P,current, C;


while(true){

	scanf("%ld%ld",&P, &C);

	if(P==0 || C==0){
		break ;
	}

	my_list.clear();
	my_list = create_list(P,C);


	printf("Case %d:\n",cas);
	cas++;


	for( i=0 ; i<C ; i++){
		scanf("%s",cmd);

		if( cmd[0]=='E'){
			scanf("%ld",&current);
			my_list.remove(current);
			my_list.push_front(current);
		}
		else{
			current = my_list.front();
			my_list.pop_front();
			my_list.push_back(current);
			printf("%ld\n",current);
		}

	}



	//printf("fin du tour\n\n\n");

}


  return 0;
}


std::list<long> create_list(long P , long C){
	
	std::list<long> my_list;
	long D=C;

	if( P < C){
		D = P;
	}

	for(long i=1;i<=D; i++){
		my_list.push_back(i);
	}
	return my_list;
}




/*
	for( i=0 ; i<C ; i++){
		scanf("%s",cmd);

		if( cmd[0]=='E'){
			scanf("%ld",&current);
			my_list.remove(current);
			my_list.push_front(current);
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
*/




