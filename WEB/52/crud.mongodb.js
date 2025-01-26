use ("crud")
db.createCollection("courses")

db.courses.insertMany({
    "users": [
      {
        "id": 1,
        "name": "Alice Smith",
        "age": 25,
        "email": "alice.smith@example.com",
        "isActive": true,
        "address": {
          "street": "10 Maple St",
          "city": "Springfield",
          "state": "IL",
          "postalCode": "62704"
        },
        "phoneNumbers": [
          {
            "type": "mobile",
            "number": "555-111-2222"
          }
        ],
        "skills": ["Java", "HTML", "CSS"]
      },
      {
        "id": 2,
        "name": "Bob Johnson",
        "age": 32,
        "email": "bob.johnson@example.com",
        "isActive": false,
        "address": {
          "street": "42 Elm St",
          "city": "Madison",
          "state": "WI",
          "postalCode": "53703"
        },
        "phoneNumbers": [
          {
            "type": "home",
            "number": "555-333-4444"
          }
        ],
        "skills": ["Python", "Django", "AWS"]
      },
      {
        "id": 3,
        "name": "Carol Taylor",
        "age": 28,
        "email": "carol.taylor@example.com",
        "isActive": true,
        "address": {
          "street": "89 Pine Ave",
          "city": "Columbus",
          "state": "OH",
          "postalCode": "43215"
        },
        "phoneNumbers": [
          {
            "type": "work",
            "number": "555-555-6666"
          }
        ],
        "skills": ["Node.js", "Express", "MongoDB"]
      },
      {
        "id": 4,
        "name": "David Lee",
        "age": 40,
        "email": "david.lee@example.com",
        "isActive": false,
        "address": {
          "street": "77 Oak Rd",
          "city": "Austin",
          "state": "TX",
          "postalCode": "73301"
        },
        "phoneNumbers": [
          {
            "type": "mobile",
            "number": "555-777-8888"
          }
        ],
        "skills": ["C++", "Linux", "Embedded Systems"]
      },
      {
        "id": 5,
        "name": "Eva Green",
        "age": 35,
        "email": "eva.green@example.com",
        "isActive": true,
        "address": {
          "street": "50 Birch Ln",
          "city": "Denver",
          "state": "CO",
          "postalCode": "80202"
        },
        "phoneNumbers": [
          {
            "type": "home",
            "number": "555-999-0000"
          }
        ],
        "skills": ["Data Analysis", "SQL", "Tableau"]
      },
      {
        "id": 6,
        "name": "Frank White",
        "age": 29,
        "email": "frank.white@example.com",
        "isActive": false,
        "address": {
          "street": "33 Willow Dr",
          "city": "Seattle",
          "state": "WA",
          "postalCode": "98101"
        },
        "phoneNumbers": [
          {
            "type": "mobile",
            "number": "555-121-3434"
          }
        ],
        "skills": ["Ruby", "Rails", "PostgreSQL"]
      },
      {
        "id": 7,
        "name": "Grace Adams",
        "age": 31,
        "email": "grace.adams@example.com",
        "isActive": true,
        "address": {
          "street": "64 Cedar St",
          "city": "Portland",
          "state": "OR",
          "postalCode": "97201"
        },
        "phoneNumbers": [
          {
            "type": "work",
            "number": "555-232-4545"
          }
        ],
        "skills": ["UX Design", "Figma", "Adobe XD"]
      },
      {
        "id": 8,
        "name": "Henry Moore",
        "age": 37,
        "email": "henry.moore@example.com",
        "isActive": false,
        "address": {
          "street": "21 Spruce St",
          "city": "Boston",
          "state": "MA",
          "postalCode": "02108"
        },
        "phoneNumbers": [
          {
            "type": "home",
            "number": "555-676-7878"
          }
        ],
        "skills": ["Cloud Computing", "Kubernetes", "Docker"]
      },
      {
        "id": 9,
        "name": "Isla Brown",
        "age": 27,
        "email": "isla.brown@example.com",
        "isActive": true,
        "address": {
          "street": "15 Chestnut St",
          "city": "Chicago",
          "state": "IL",
          "postalCode": "60601"
        },
        "phoneNumbers": [
          {
            "type": "mobile",
            "number": "555-898-9090"
          }
        ],
        "skills": ["SEO", "Content Writing", "Google Analytics"]
      }]}
  )