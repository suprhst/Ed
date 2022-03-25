import os
import pickle

class Search:
    def __init__(self):
        self.file_index =[]
        self.results = []
        self.matches = 0
        self.records = 0

    def create_new_index(self,root_path):
        '''Generate new index and save to file '''
        self.file_index = [(root,files) for root,dirs,files in os.walk(root_path) if files]

        # save index to file 

        with open('file_index.pkl','wb') as f:
            pickle.dump(self.file_index, f)


    def load_existing_index(self):
        ''' Loads existing Index '''
        try :
            with open('file_index.pkl','rb') as f :
                self.file_index = pickle.load(f)
        
        except:
            self.file_index = []

    def search(self,term,search_type = 'contains'):
        ''' Search for term based in type'''
        
        # reset variables

        self.results.clear()
        self.matches = 0
        self.records = 0

        #perform search 

      
