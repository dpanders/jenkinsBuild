pipeline {
    agent any

    stages {
        stage('Hello') {
            steps {
                sh 'gcc main.c -o main'
                archiveArtifacts artifacts: 'main'
            }
        }
    }
}

