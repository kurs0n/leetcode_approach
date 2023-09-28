class Solution:
    """
    @param: strs: a list of strings
    @return: encodes a list of strings to a single string.
    """
    def encode(self, strs):
        # write your code here
        encoded_string = "" 
        for i in range(len(strs)):
            encoded_string+= strs[i]
            if i < len(strs)-1:
                encoded_string+=":;"
        return encoded_string

    """
    @param: str: A string
    @return: decodes a single string to a list of strings
    """
    def decode(self, str):
        return str.split(":;")


sol = Solution()
encoded_string = sol.encode(["lint","code","love","you"]) 
print(sol.decode(encoded_string))
 
