setupTransforms_MainColor();                                                    
//==========================                                                    
    glBindBuffer(GL_ARRAY_BUFFER, sphere_1_VBO);                  
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, sphere_1_INDICES_VBO);  
    //------------------------------------------------------------------------  
    LoadIdentity(modelWorld);                                                   
    //------------------------                                                  
    Translate(modelWorld, sphere_1_POSITION[0],                   
                          sphere_1_POSITION[1],                   
                          sphere_1_POSITION[2]);                  

    Rotate(modelWorld,    sphere_1_ROTATE[0],                     
                          sphere_1_ROTATE[1],                     
                          sphere_1_ROTATE[2],                     
                          sphere_1_ROTATE[3]++);                    

    //------------------------------------------------------                    
    LoadIdentity(modelRotation);                                                
    //------------------------                                                  
    Rotate(modelRotation, sphere_1_ROTATE[0],                     
                          sphere_1_ROTATE[1],                     
                          sphere_1_ROTATE[2],                     
                          sphere_1_ROTATE[3]);                    

//=========================                                                     
SelectShader(shaderNumber);                                                     
//=========================                                                     

    glActiveTexture ( GL_TEXTURE1 );                                            
    glBindTexture(GL_TEXTURE_2D, sphere_1_NORMALMAP);             
    //---                                                                       
    glActiveTexture (GL_TEXTURE0);                                              
    glBindTexture(GL_TEXTURE_2D, sphere_1_TEXTUREMAP);            
    //--------------------------------------------------------------            
    glDrawElements(GL_TRIANGLES, 2880, GL_UNSIGNED_INT, 0);           

