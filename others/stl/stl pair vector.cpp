// Pair
  pair<int, int> p_array[3];
    int a[] = {1, 2, 3};
    int b[] = {2, 3, 4};
    p_array[0] = {1, 2};
    p_array[1] = {2, 3};
    p_array[2] = {3, 4};

    swap(p_array[0], p_array[2]); 
    for(int i=0; i<3; i++){
      cout << p_array[i].first << " " << p_array[i].second << endl;
  }


// vector of pair
  vector<pair<int, int>> v;
  printVec(v);
  int n;
  cin >> n;
  for(int i=0; i<n; i++){
    int x, y;
    cin >> x >> y;
    v.push_back({x, y});
  }
  printVec(v);

// print vector of pair
  void printVec(vector<pair<int, int>> v){
    int size = v.size();
    cout << "size: " << size << endl;
    for(int i=0; i<size; i++){
      cout << v[i].first << " " << v[i].second << endl;
    }
    cout << endl;
  }


// iterator ////////////
  vector<int> v = {2, 3, 5, 4,7};
  vector<int> :: iterator it = v.begin();
  cout << (*(it+1)) << endl;

  for(it=v.begin(); it != v.end(); it++){
    cout << (*it) << endl;
  }

  vector<pair<int, int>> v_p = {{1,3}, {2, 3}, {3, 4}};
  vector<pair<int, int>> :: iterator it;

  for(it=v_p.begin(); it != v_p.end(); it++){
    cout << it->first << " " << it->second << endl;
  }

//C++ STL MAPS - Part 1 / Episode 25
  map<int, string> m;
  m[1] = "abc";
  m[5] = "cdc";
  m[2] = "acd";

  // old syntex
  map<int, string> :: iterator it;
  for(it = m.begin(); it != m.end(); it++){
    cout << (*it).first << " " << (*it).second << endl;
  }
  // new syntex
  for(auto &pr : m){
    cout << pr.first << " " << pr.second << endl;
  }
  //find
  auto it = m.find(1); // log(n)
  if(it == m.end()){
    cout << "No Value";
  }else{
    cout << (*it).first << " " << (*it).second ;
  }
  // erese
  m.erase(1);
  m.clear();




