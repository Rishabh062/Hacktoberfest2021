# importing modules
from xmlrpc.server import SimpleXMLRPCServer

# Define server and create it
server = SimpleXMLRPCServer(('localhost', 3000), logRequests=True)


# Define any functions we want available
def area_of_rect(length, breadth):
    return length * breadth


# Register these functions with the server interface
server.register_function(area_of_rect)

# if this module is run from command line as opposed to being imported
# then go into serve forever mode
if __name__ == '__main__':
    try:
        print('Serving...')
        server.serve_forever()
    except KeyboardInterrupt:
        print("Exiting")
