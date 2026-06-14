
# find the longest repetition in the sequence
# maximum-length substring containing only one type of character



def length_longest_substring_one_character(s: str) -> int:
    """
    Gives the length of longest substring which has one character
    """
    start = 0
    end = 1
    currlen = 1
    maxlen = 1

    # increment the end if we see s[start] == s[end]
    while end < len(s):
        # increase the endpoint we see the same character
        if s[end] == s[start]:
            end += 1
            currlen = end - start
            maxlen = max(maxlen, currlen)
        else:
            # print(f"changed at end: {end}, string be: {s[start:end]}, maxlen: {maxlen}")
            start += 1
    return maxlen

if __name__ == '__main__':
    s = input()
    print(length_longest_substring_one_character(s))