int main()
{
 char hostbuffer[256];
 char *IPbuffer;
 struct hostent *host_entry;
 int hostname;
 
 // To retrieve hostname
 hostname = gethostname(hostbuffer, sizeof(hostbuffer));
 checkHostName(hostname);
 
 // To retrieve host information
 host_entry = gethostbyname(hostbuffer);
 checkHostEntry(host_entry);
 
 // To convert an Internet network
 // address into ASCII string
 IPbuffer = inet_ntoa(*((struct in_addr*)
 host_entry->h_addr_list[0]));
 
 printf("Hostname: %s\n", hostbuffer);
 printf("Host IP: %s", IPbuffer);
 
 return 0;
}

void checkHostName(int hostname)
{
 if (hostname == -1)
 {
 perror("gethostname");
 exit(1);
 }
}
 
// Returns host information corresponding to host name
void checkHostEntry(struct hostent * hostentry)
{
 if (hostentry == NULL)
 {
 perror("gethostbyname");
 exit(1);
 }
}
