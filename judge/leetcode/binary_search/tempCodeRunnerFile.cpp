    int n, days;
    cin >> n >> days;

    vi nums(n);

    array_input_int(nums, 0, n);

    int low = *max_element(nums.begin(), nums.end());
    int high = 100;

    int ans = -1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int d1 = count_day(nums, mid);

        if (d1 <= days)
        {
            ans = mid;
            high = mid;
        }
        else
        {
            low = mid;
        }
    }

    cout << ans << endl;