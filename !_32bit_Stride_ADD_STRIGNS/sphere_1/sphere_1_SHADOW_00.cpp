    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-       
    setupTransforms_Shadows();                                                                   
    //========================                                                                   

    LoadIdentity(modelWorld);                                                                    
    //------------------------                                                                   
    glBindBuffer(GL_ARRAY_BUFFER, sphere_1_VBO);                                   
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, sphere_1_INDICES_VBO);                   
    //------------------------------------------------------------------------                   
    Translate(modelWorld, sphere_1_POSITION[0],                                    
                          sphere_1_POSITION[1],                                    
                          sphere_1_POSITION[2]);                                   
    //------------------------------------------------------------------------                   
    Rotate(modelWorld,    sphere_1_ROTATE[0],                                      
                          sphere_1_ROTATE[1],                                      
                          sphere_1_ROTATE[2],                                      
                          sphere_1_ROTATE[3]);                                     
//=============================================                                                  
SelectShader(shaderNumber);                                                                      
//=============================================                                                  
    glDrawElements(GL_TRIANGLES, 2880, GL_UNSIGNED_INT, 0);      
