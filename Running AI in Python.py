from openai import OpenAI

client = OpenAI(
    base_url="http://localhost:1234/v1",
    api_key="lm-studio"
)

question = input("Ask the AI: ")

response = client.chat.completions.create(
    model="qwen/qwen3-4b-2507",
    messages=[
        {
            "role": "user",
            "content": question
        }
    ]
)

print(response.choices[0].message.content)