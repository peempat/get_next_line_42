// #include <unistd.h>
// #include <stdio.h>
// #include <fcntl.h>

// int main(void)
// {
//     int fd;
//     char buffer[5];
//     ssize_t bytes;
//     fd = open("test.txt", O_RDONLY);
//     if (fd == -1)
//         return (1);
//     bytes = read(fd, buffer, 4);
//     if (bytes > 0)
//     {
//         buffer[bytes] = '\0';
//         printf("Read: %s\n", buffer);
//     }
//     close(fd);
//     return (0);
// }
