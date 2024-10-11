  int n, k;
    cin >> n >> k;

    vi v(n);

    vector<int> dp(n, -1);
    array_input_int(v, 0, n);

    cout << n << " ";