https://pythontutor.com/render.html#code=%23include%20%3Cstdio.h%3E%0A%23include%20%3Cstdlib.h%3E%0A%0Aint%20%20%20%20ft_strlcpy%28char%20*dst,%20const%20char%20*src,%20size_t%20dstsize%29%0A%7B%0A%20%20%20%20char%20%20%20%20*sc%3B%0A%20%20%20%20size_t%20%20%20%20i%3B%0A%0A%20%20%20%20i%20%3D%200%3B%0A%20%20%20%20sc%20%3D%20%28char%20*%29src%3B%0A%20%20%20%20if%20%28dstsize%20%3D%3D%200%29%0A%20%20%20%20%20%20%20%20return%20%28ft_strlen%28src%29%29%3B%0A%20%20%20%20if%20%28dstsize%20%3E%200%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20while%20%28sc%5Bi%5D%20!%3D%20'%5C0'%20%26%26%20i%20%3C%20dstsize%20-%201%29%0A%20%20%20%20%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20dst%5Bi%5D%20%3D%20sc%5Bi%5D%3B%0A%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20%20i%2B%2B%3B%0A%20%20%20%20%20%20%20%20%7D%0A%20%20%20%20%7D%0A%20%20%20%20dst%5Bi%5D%20%3D%20'%5C0'%3B%0A%20%20%20%20while%20%28sc%5Bi%5D%20!%3D%20'%5C0'%29%0A%20%20%20%20%20%20%20%20i%2B%2B%3B%0A%20%20%20%20return%20%28i%29%3B%0A%7D%0A%0Achar%20%20%20%20*ft_strdup%28const%20char%20*s1%29%0A%7B%0A%20%20%20%20char%20%20%20%20*dest%3B%0A%20%20%20%20int%20%20%20%20%20%20%20%20i%3B%0A%0A%20%20%20%20i%20%3D%200%3B%0A%20%20%20%20while%20%28s1%5Bi%5D%20!%3D%20'%5C0'%29%0A%20%20%20%20%20%20%20%20i%2B%2B%3B%0A%20%20%20%20dest%20%3D%20malloc%28sizeof%28char%29%20*%20%28i%20%2B%201%29%29%3B%0A%20%20%20%20if%20%28!dest%29%0A%20%20%20%20%20%20%20%20return%20%28NULL%29%3B%0A%20%20%20%20i%20%3D%200%3B%0A%20%20%20%20while%20%28s1%5Bi%5D%20!%3D%20'%5C0'%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20dest%5Bi%5D%20%3D%20s1%5Bi%5D%3B%0A%20%20%20%20%20%20%20%20i%2B%2B%3B%0A%20%20%20%20%7D%0A%20%20%20%20dest%5Bi%5D%20%3D%200%3B%0A%20%20%20%20return%20%28dest%29%3B%0A%7D%0A%0Achar%20%20%20%20*ft_strchr%28const%20char%20*s,%20int%20c%29%0A%7B%0A%20%20%20%20while%20%28*s%29%0A%20%20%20%20%7B%0A%20%20%20%20%20%20%20%20if%20%28*s%20%3D%3D%20%28char%29c%29%0A%20%20%20%20%20%20%20%20%20%20%20%20return%20%28%28char%20*%29s%29%3B%0A%20%20%20%20%20%20%20%20s%2B%2B%3B%0A%20%20%20%20%7D%0A%20%20%20%20if%20%28*s%20%3D%3D%20%28char%29c%29%0A%20%20%20%20%20%20%20%20return%20%28%28char%20*%29s%29%3B%0A%20%20%20%20if%20%28c%20%3D%3D%200%29%0A%20%20%20%20%20%20%20%20return%20%28%28char%20*%29s%29%3B%0A%20%20%20%20return%20%28NULL%29%3B%0A%7D%0A%0Aint%20%20%20%20ft_strlen%28const%20char%20*str%29%0A%7B%0A%20%20%20%20int%20%20%20%20i%3B%0A%0A%20%20%20%20i%20%3D%200%3B%0A%20%20%20%20while%20%28str%5Bi%5D%20!%3D%20'%5C0'%29%0A%20%20%20%20%20%20%20%20i%2B%2B%3B%0A%20%20%20%20return%20%28i%29%3B%0A%7D%0A%0Achar%20%20%20%20*ft_strtrim%28char%20const%20*s1,%20char%20const%20*set%29%0A%7B%0A%20%20%20%20int%20%20%20%20%20%20%20%20start%3B%0A%20%20%20%20int%20%20%20%20%20%20%20%20end%3B%0A%20%20%20%20char%20%20%20%20*str%3B%0A%0A%20%20%20%20if%20%28!s1%20%7C%7C%20!set%29%0A%20%20%20%20%20%20%20%20return%20%28NULL%29%3B%0A%20%20%20%20start%20%3D%200%3B%0A%20%20%20%20end%20%3D%20ft_strlen%28s1%29%20-%201%3B%0A%20%20%20%20while%20%28ft_strchr%28set,%20s1%5Bstart%5D%29%20%26%26%20start%20%3C%3D%20end%29%0A%20%20%20%20%20%20%20%20start%2B%2B%3B%0A%20%20%20%20if%20%28start%20%3E%20end%29%0A%20%20%20%20%20%20%20%20return%20%28ft_strdup%28s1%20%2B%20end%20%2B%201%29%29%3B%0A%20%20%20%20while%20%28ft_strchr%28set,%20s1%5Bend%5D%29%20%26%26%20end%20%3E%3D%200%29%0A%20%20%20%20%20%20%20%20end--%3B%0A%20%20%20%20str%20%3D%20malloc%28end%20-%20start%20%2B%202%29%3B%0A%20%20%20%20if%20%28!str%29%0A%20%20%20%20%20%20%20%20return%20%28NULL%29%3B%0A%20%20%20%20ft_strlcpy%28str,%20%26s1%5Bstart%5D,%20end%20-%20start%20%2B%202%29%3B%0A%20%20%20%20return%20%28str%29%3B%0A%7D%0A%0Aint%20main%28%29%0A%7B%0A%20%20printf%28%22%25s%22,%20ft_strtrim%28%22Hello%20World%22,%20%22Hld%22%29%29%3B%0A%7D&cumulative=false&curInstr=138&heapPrimitives=nevernest&mode=display&origin=opt-frontend.js&py=c_gcc9.3.0&rawInputLstJSON=%5B%5D&textReferences=false

#include <stdio.h>
#include <stdlib.h>

int    ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	    char    *sc;
	    size_t    i;
	
	    i = 0;
	    sc = (char *)src;
	    if (dstsize == 0)
	        return (ft_strlen(src));
	    if (dstsize > 0)
	    {
	        while (sc[i] != '\0' && i < dstsize - 1)
	        {
	                dst[i] = sc[i];
	                i++;
	        }
	    }
	    dst[i] = '\0';
	    while (sc[i] != '\0')
	        i++;
	    return (i);
	}
	
	char    *ft_strdup(const char *s1)
	{
	    char    *dest;
	    int        i;
	
	    i = 0;
	    while (s1[i] != '\0')
	        i++;
	    dest = malloc(sizeof(char) * (i + 1));
	    if (!dest)
	        return (NULL);
	    i = 0;
	    while (s1[i] != '\0')
	    {
	        dest[i] = s1[i];
	        i++;
	    }
	    dest[i] = 0;
	    return (dest);
	}
	
	char    *ft_strchr(const char *s, int c)
	{
	    while (*s)
	    {
	        if (*s == (char)c)
	            return ((char *)s);
	        s++;
	    }
	    if (*s == (char)c)
	        return ((char *)s);
	    if (c == 0)
	        return ((char *)s);
	    return (NULL);
	}
	
	int    ft_strlen(const char *str)
	{
	    int    i;
	
	    i = 0;
	    while (str[i] != '\0')
	        i++;
	    return (i);
	}
	
	char    *ft_strtrim(char const *s1, char const *set)
	{
	    int        start;
	    int        end;
	    char    *str;
	
	    if (!s1 || !set)
	        return (NULL);
	    start = 0;
	    end = ft_strlen(s1) - 1;
	    while (ft_strchr(set, s1[start]) && start <= end)
	        start++;
	    if (start > end)
	        return (ft_strdup(s1 + end + 1));
	    while (ft_strchr(set, s1[end]) && end >= 0)
	        end--;
	    str = malloc(end - start + 2);
	    if (!str)
	        return (NULL);
	    ft_strlcpy(str, &s1[start], end - start + 2);
	    return (str);
	}
	
	int main()
	{
	  printf("%s", ft_strtrim("Hello World", "Hld"));
	}
