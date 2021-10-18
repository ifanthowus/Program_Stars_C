int main() {
	int i, j, t;

	cout<<" =========================== Piramid  ==========================="<<endl;
	cout<<endl;
	cout<<" Masukan Tinggi Piramid : ";cin>>t;
	cout<<endl;

	for (i = 1; i<=t; i++){
		for(j = 1; j<=i; j++){
			cout<<" *";

		}
		cout<<endl;
	}
	cout<<endl;
	cout<<" ================================================================"<<endl;
	return 0;
}