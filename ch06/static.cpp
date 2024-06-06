size_t count_calls()
{
    static size_t ctr = 0;  // value will persist across calls
    return ++ctr;
}
