struct Myhash{
    int cap,size;
    int *arr;
    Myhash(int cap){
        this->cap=cap;
        size=0;
        for(int i=0;i<cap;i++){
            arr[i]=-1;
        }
    }
    int hash(int key){
        return key%cap;
    }
    bool search(int key){
        int h=hash(key);
        int i=h;
        while(arr[i]!=-1){
            if(arr[i]==key) return true;
            i=(i+1)%cap;
            if(i==h) return false;
        }
        return false;
    }
    bool insert(int key){
        if(size==cap) return false;
        int i=hash(key);
        
        while(arr[i]!=-1 or arr[i]!=-2 or arr[i]!=key){
            i=(i+1)%cap;
        }
        if(arr[i]==key) return false;
        else {
            arr[i]=key;
            size++;
            return true;
        }

    }
    bool erase(int key){
        if(size==0) return false;
        int i=hash(key);
        while(arr[i]!=-1 or arr[i]!=key){
            i=(i+1)%cap;
        }
        if(arr[i]==-1){
            return false;
        }
        else {
            arr[i]=-2;
            size--;
            return true;
        }

    }
};